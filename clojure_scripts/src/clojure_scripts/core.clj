(ns clojure_scripts.core
  (:require [quil.core :refer :all]
            [quil.middleware :as m]))

(defn setup []
  :screen 0
  :speed 1
  :level 1
  :box-1-points 0
  :box-2-points 0
  (smooth)
  (no-stroke)
  (set-state! :mouse-position (atom [0 0])))


(defn draw
  []
  (background 125)
  (rect 300 300 100 100)
  (with-stroke 10
    (let [[x y] @(state :mouse-position)]
      (rect x y 50 50 ))))

(defn mouse-moved []
  (let [x (mouse-x)  y (mouse-y)]
    (reset! (state :mouse-position) [x y]))) 

(defsketch mouse-example
  :title "Mouse example."
  :size [500 500]
  :setup setup
  :draw draw
  :mouse-moved mouse-moved)

(defn -main [& args])

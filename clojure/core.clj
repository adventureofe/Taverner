(ns game.core)

(load "nouns")
(load "species")

(get species :vampire)
(get (get species :vampire) :nouns)

(defn values [my-map my-key]
  (map (fn[[key value]](get value my-key)) my-map))

(values species :name)
(values species :nouns)


;; test getting sorted unique values
(sort (distinct (flatten (values species :name))))

(values species :pronoun)
(distinct (flatten (mapcat identity (values species :pronoun))))
(distinct (flatten (mapcat seq (values species :pronoun))))


(values species :pronoun)

(sort (distinct (flatten (values species :pronoun))))

(defn uniques [my-map my-key]
  (sort(distinct (flatten (values my-map my-key)))))


(uniques species :name)
(uniques species :plural)
(uniques species :subtypes)
(uniques species :weight-min)
(uniques species :length-min)
(uniques species :type)
(uniques species :gender)
(uniques species :tavern-name?)
(uniques species :taverner?)

(distinct (flatten (value-list species :subtypes)))

(distinct (make-value-list species :gender))

(defn vec*
  ([a] a)
  ([a b] (map * a b))
  ([a b & more] (reduce vec* (vec* a b) more)))


(vec* '[4 5 6])

(defun vec- 
  ([a] a)
  ([a b] (map - a b))
  ([a b & more] (reduce (vec- a b) more)))

(defn dot [v1 v2]
  (reduce + (vec* v1 v2)))

(defn matrix* [m v]
  (map #(dot v %)m)))

(defn absolute-value[x]
  (if (< x 0) (- x) x))

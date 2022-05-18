(def species
{
 :aardvark {:nouns (get nouns :aarvark)
            :weight-min 60000 :weight-max 80000 :length-min 1050 :length-max 1300
            :type "mammal" :subtypes '("burrower" "runner") :gender "split"
            :tavern-name? false :taverner? false}

 :aardwolf {:nouns (get nouns :wolf)
            :weight-min 7000 :weight-max 10000 :length-min 550 :length-max 800
            :type "mammal" :subtypes '("burrower" "runner") :gender "split"
            :tavern-name? false :taverner? false}

 :alapaca {:nouns (get nouns :alpaca)
           :weight-min 48000 :weight-max 90000 :length-min 1220 :length-max 2130
           :type "mammal" :subtypes '("beast" "grazer" "camelid" "runner") :gender "split" 
           :tavern-name? true :taverner? false}

 :albatross {:nouns (get nouns :bird)
             :weight-min 6350 :weight-max 11910 :length-min 1070 :length-max 1350
             :type "bird" :subtypes '("seabird" "flyer" "bird of prey") :gender "split" 
             :tavern-name? true :taverner? false}

 :alligator {:nouns (get nouns :alligator)
             :weight-min 200000 :weight-max 350000 :length-min 3000 :length-max 4000
             :type "reptile" :subtypes '("swimmer" "monster") :gender "split"
             :tavern-name? false :taverner? false}

 :anchovy {:nouns (get nouns :fish)
           :weight-min 20 :weight-max 40 :length-min 135 :length-max 210 
           :type "fish" :subtypes '("baitfish" "swimmer") :gender "split"
           :tavern-name? true :taverner? false}

 :angel {:nouns (get nouns :angel)
         :weight-min 1 :weight-max 1 :length-min 1700 :length-max 2000
         :type "spirit" :subtypes '("spirit" "humanoid" "flyer") :gender "split"
         :tavern-name? true :taverner? false}

 :anteater {:nouns (get nouns :anteater)
            :weight-min 33000 :weight-max 55000 :length-min 1820 :length-max 2170
            :type "mammal" :subtypes '("sloth" "burrower" "runner") :gender "split"
            :tavern-name? false :taverner? false}

 :axolotl {:nouns (get nouns :axolotl)
           :weight-min 60 :weight-max 255 :length-min 230 :length-max 300
           :type "amphibian" :subtypes '("lizard" "slime" "swimmer") :gender "split"
           :tavern-name? false :taverner? false}

 :aye-aye {:nouns (get nouns :aye-aye)
           :weight-min 1750 :weight-max 2250 :length-min 960 :length-max 1040
           :type "mammal" :subtypes '("lemur" "climber") :gender "split"
           :tavern-name? false :taverner? false}

 :banshee {:nouns (get nouns :banshee)
           :weight-min 1 :weight-max 1 :length-min 1000 :length-max 1500
           :type "spirit" :subtypes '("demon" "fairy" "runner") :gender "female"
           :tavern-name? true :taverner? false}

 :bearded-dragon {:nouns (get nouns :bearded-dragon)
                  :weight-min 400 :weight-max 550 :length-min 500 :length-max 600 
                  :type "reptile" :subtypes '("lizard" "runner") :gender "split"
                  :tavern-name? false :taverner? false}

 :bobcat {:nouns (get nouns :bobcat)
          :weight-min 6400 :weight-max 18300 :length-min 475 :length-max 1250
          :type "mammal" :subtypes '("feline" "beast" "runner" "feline") :gender "split"
          :tavern-name? true :taverner? false}

:chameleon {:nouns (get nouns :chameleon)
            :weight-min 85 :weight-max 170 :length-min 51 :length-max 76
            :type "reptile" :subtypes '("lizard") :gender "split"
            :tavern-name? true :taverner? false}

 :chimpanzee {:nouns (get nouns :chimpanzee)
              :weight-min 40000 :weight-max 70000 :length-min 1500 :length-max 1680
              :type "mammal" :subtypes '("humanoid" "ape" "runner" "climber") :gender "split"
              :tavern-name? false :taverner? false}

 :crocodile {:nouns (get nouns :crocodile)
             :weight-min 137500 :weight-max 201000 :length-min 4500 :length-max 5580
             :type "reptile" :subtypes '("monster" "lizard" "swimmer") :gender "split"
             :tavern-name? true :taverner? false}

 :demon {:nouns (get nouns :demon)
         :weight-min 1 :weight-max 1 :length-min 1700 :length-max 2000
         :type "spirit" :subtypes '("spirit" "demon" "humanoid" "flyer") :gender "none"
         :tavern-name? true :taverner? false}

 :duck {:noun (get nouns :duck)
        :weight-min 720 :weight-max 1600 :length-min 500 :length-max 650
        :type "bird" :subtypes '("flyer" "swimmer") :gender "split"
        :tavern-name? true :taverner? false}

 :dwarf {:nouns (get nouns :dwarf)
         :weight-min 44000 :weight-max 55000 :length-min 1030 :length-max 1300
         :type "mammal" :subtypes '("humanoid" "burrower" "runner") :gender "split"
         :tavern-name? true :taverner? true}

 :elephant {:nouns (get nouns :elephant)
            :weight-min 5443108 :weight-max 9071847 :length-min 3200 :length-max 3960
            :type "mammal" :subtypes '("beast" "wanderer" "runner") :gender "split"
            :tavern-name? false :taverner? false}

 :elf {:nouns (get nouns :elf)
       :weight-min 40000 :weight-max 65000 :length-min 1442 :length-max 1660
       :type "mammal" :subtypes '("humanoid" "fairy" "ape" "runner") :gender "split"
       :tavern-name? true :taverner? true}

 :frog {:nouns (get nouns :frog)
        :weight-min 22 :weight-max 29 :length-min 60 :length-max 90
        :type "amphibian" :subtypes '("slime" "swimmer" "jumper") :gender "split" 
        :tavern-name? true :taverner? false}

 :goblin {:nouns (get nouns :goblin)
          :weight-min 40000 :weight-max 60000 :length-min 1030 :length-max 1400
          :type "orcish" :subtypes '("humanoid" "ape" "runner") :gender "split" 
          :tavern-name? true :taverner? true}

 :gremlin {:nouns (get nouns :gremlin)
           :weight-min 12000 :weight-max 15000 :length-min 700 :length-max 1100
           :type "orcish" :subtypes '("humanoid" "fairy" "runner") :gender "none"
           :tavern-name? true :taverner? true}

 :human {:nouns (get nouns :imp) 
         :weight-min 59000 :weight-max 77000 :length-min 1590 :length-max 1710
         :type "mammal" :subtypes '("humanoid" "ape" "wanderer" "runner") :gender "split"
         :tavern-name? false :taverner? true}

 :imp {:nouns (get nouns :imp) 
       :weight-min 6000 :weight-max 7000 :length-min 300 :length-max 600 
       :type "spirit" :subtypes '("humanoid" "fairy" "demon" "runner") :gender "none" 
       :tavern-name? true :taverner? true}

 :lion {:nouns (get nouns :lion)
        :weight-min 130000 :weight-max 190000 :length-min 1600 :length-max 2100
        :type "mammal" :subtypes '("feline" "beast" "runner") :gender "split"
        :tavern-name? true :taverner? false}

 :slime {:nouns (get nouns :slime)
        :weight-min 6000 :weight-max 8000 :length-min 500 :length-max 1000
        :type "slime" :subtypes '("beast" "slitherer") :gender "none"
        :tavern-name? false :taverner? false}

 :gelatinous-cube {:nouns (get nouns :gelatinous-cube)
        :weight-min 200000 :weight-max 300000 :length-min 2000 :length-max 3000
        :type "slime" :subtypes '("beast" "slitherer") :gender "none"
        :tavern-name? false :taverner? false}


 :ogre {
        :nouns (get nouns :ogres)
        :weight-min 180000 :weight-max 200000 :length-min 2200 :length-max 2600
        :type "orcish" :subtypes '("humanoid" "monster" "demon" "runner") :gender "split"
        :tavern-name? true :taverner? false}

 :orc {:nouns (get nouns :orc)
       :weight-min 70000 :weight-max 100000 :length-min 1690 :length-max 2000 
       :type "orcish" :subtypes '("humanoid" "ape" "runner") :gender "split"
       :tavern-name? true :taverner? true}

 :owl {:nouns (get nouns :owl)
       :weight-min 260 :weight-max 555 :length-min 330 :length-max 390
       :type "spirit" :subtypes '("flyer" "bird of prey") :gender "split"
       :tavern-name? true :taverner? false}

 :pigeon {:nouns (get nouns :pigeon)
          :weight-min 238 :weight-max 380 :length-min 290 :length-max 370
          :type "bird" :subtypes '("flyer" "vermin") :gender "split"
          :tavern-name? true :taverner? false}

 :troll {:nouns (get nouns :troll) 
         :weight-min 100000 :weight-max 130000 :length-min 2200 :length-max 2500
         :type "orcish" :subtypes '("humanoid" "demon" "runner") :gender "split" 
         :tavern-name? true :taverner? true}

 :vampire {:nouns (get nouns :vampire)
           :weight-min 59000 :weight-max 77000 :length-min 1590 :length-max 1710
           :type "spirit" :subtypes '("humanoid" "flyer") :gender "split"
           :tavern-name? true :taverner? true}

 :wolf {:nouns (get nouns :wolf) 
        :weight-min 39000 :weight-max 69000 :length-min 1050 :length-max 1600
        :type "mammal" :subtypes '("runner" "canine" "wanderer") :gender "split"
        :tavern-name? true :taverner? false}
   })


(def nouns
  {
   :spirit {
            :generic '"spirit" :generics "spirits"
            :male "" :males ""
            :female "" :females ""
            :child "wisp" :children "wisps"
            :collective "gathering" :collectives "gatherings"}
   
   :angel {
           :generic '("angel" "spirit") :generics '("angels" "spirits") 
           :male "" :males ""
           :female "" :females ""
           :child "wisp" :children "wisps"
           :collective "choir" :collectives "choirs"} 
   
   :ghoul {
           :generic '("ghoul" "spirit" "ghost") :generics '("ghouls" "spirits" "ghosts")
           :male "" :males ""
           :female "" :females ""
           :child "wisp" :children "wisps"
           :collective "haunting" :collectives "hauntings"}

   :slime {
           :generic "slime" :generics "slimes"
           :male "" :males ""
           :female "" :females ""
           :child "slimelet" :children "slimelets"
           :collective "mire" :collectives "mires"}


   :gelatinous-cube {
           :generic "gelatinous-cube" :generics "gelatinous-cubes"
           :male "" :males ""
           :female "" :females ""
           :child "cubelet" :children "cubelets"
           :collective "mire" :collectives "mires"}


   
   :banshee {
             :generic '("banshee" "ghoul" "spirit" "ghost") :generics '("banshees" "ghouls" "spirits" "ghosts")
             :male "" :males ""
             :female "" :females ""
             :child "wisp" :children "wisps"
             :collective "haunting" :collectives "hauntings"}
   
   :bird {
          :generic "bird" :generics "birds"
          :male '("cock" "rooster") :males '("cocks" "roosters")
          :female "hen" :females "hens"
          :child '("chick" "hatchling") :children '("chicks" "hatchlings")
          :collective "flock" :collectives "flocks"}

   :pigeon {
            :generic "pigeon" :generics "pigeons"
            :male "cock" :males "cocks"
            :female "hen" :females "hens"
            :child '("chick" "hatchling") :children '("chicks" "hatchlings")
            :collective "squab" :collectives "squabs"}
   
   :owl {
         :generic "owl" :generics "owls"
         :male "" :males ""
         :female "hen" :females "hens"
         :child "fledgling" :children "fledglings"
         :collective "flock" :collectives "flocks"}

   :duck {
         :generic "duck" :generics "ducks"
         :male "drake" :males "drakes"
         :female "hen" :females "hens"
         :child "fledgling" :children "fledglings"
         :collective "flock" :collectives "flocks"}
 
   :alpaca {
            :generic "alpaca" :generics "alpacas"
            :male "" :males ""
            :female "" :females ""
            :child "calf" :children "calves"
            :collective "caravan" :collectives "caravans"}
   
   :cow {
         :generic "cow" :generics '("cows" "cattle")
         :male "bull" :males "bulls"
         :female "cow"  :females "cows"
         :child "calf" :children "calves"
         :collective "herd" :collectives "herds"}

   :elephant {
         :generic "elephant" :generics "elephants"
         :male "bull" :males "bulls"
         :female ""  :females ""
         :child "calf" :children "calves"
         :collective "herd" :collectives "herds"}


   :dog {
         :generic '("dog" "doggo" "doggy" "hound" "pooch" "mutt") :generics '("dogs" "doggies" "hounds" "pooches" "mutts")
         :male "" :males "" 
         :female "bitch" :females "bitches"
         :child '("puppy" "pup" "pupper") :children '("puppies" "pups")
         :collective "pack" :collectives "packs"}

   :wolf {
          :generic "wolf" :generics "wolves"
          :male "" :males ""
          :female '("bitch" "she-wolf") :females '("bitches" "she-wolves")
          :child "cub" :children "cubs"
          :collective "pack" :collectives "packs"}

   :horse {
           :generic '("horse" "horsey" "steed") :generics '("horses" "horsies" "steeds")
           :male "stallion" :males "stallions"
           :female "mare" :females "mares"
           :child "foal" :children "foals"
           :collective "herd" :collectives "herds"}
   
   :cat {
         :generic '("cat" "moggy" "pussycat") :generics '("cats" "moggies" "pussycats")
         :male "tomcat" :males "tomcats"
         :female "" :females ""
         :child '("kitten" "kitty") :children '("kittens" "kitties")
         :collective "pride" :collectives "prides"}

   :bobcat {
         :generic "bobcat" :generics "bobcats"
         :male "tomcat" :males "tomcats"
         :female "" :females ""
         :child '("kitten" "kitty") :children '("kittens" "kitties")
         :collective "pride" :collectives "prides"}

   :lion {
         :generic "lion" :generics "lions"
         :male "" :males ""
         :female "lioness" :females "lionesses"
         :child "cub"  :children "cubs"
         :collective "pride" :collectives "prides"}

   :pig {
         :generic '("pig" "piggy" "hog") :generics '("pigs" "piggies" "hogs")
         :male "boar" :males "boars"
         :female "sow" :females "sows"
         :child "piglet" :children  "piglets"
         :collective "drift" :collectives "drifts"}
   
   :aardvark {
              :generic '("aardvark" "dirt pig") :generics '("aardvarks" "dirt pigs")
              :male "" :males ""
              :female "sow" :females "sows"
              :child "aardvarklet" :chidlren "aardvarklets"
              :collective "armory" :collectives "armories"}

   :anteater {
              :generic "anteater" :generics "anteaters" 
              :male "" :males "" 
              :female "sow" :females "sows"
              :child "anteatlet" :chidlren "anteatlets"
              :collective "armory" :collectives "armories"}

   :axolotl {
             :generic '("axolotl" "newt") :generics '("axolotls" "newts")
             :male "" :males ""
             :female "" :females ""
             :child '("polliwog" "tadpole") :children '("polliwogs" "tadpoles")
             :collective "army" :collectives "armies"}

   :frog {
          :generic '("frog" "froggy" "toad") :generics '("frogs" "froggies" "toads") 
          :male "" :males ""
          :female "" :females ""
          :child '("polliwog" "tadpole") :children '("polliwogs" "tadpoles")
          :collective "army" :collectives "armies"}
  
   :weasel {
            :generic "weasel" :generics "weasels"
            :male "jack" :males "jacks"
            :female "jill" :females "jills"
            :child "kit" :children "kits"
            :collective "colony" :collectives "colonies"}
   
   :bearded-dragon {
            :generic '("bearded dragon" "lizard") :generics '("bearded dragon" "lizards") 
            :male "" :males ""
            :female "" :females ""
            :child "hatchling" :children "hatchlings"
            :collective "congregation" :collectives "congregations"}

   :chameleon {
            :generic "chameleon" :generics "chameleons" 
            :male "" :males ""
            :female "" :females ""
            :child "hatchling" :children "hatchlings"
            :collective "congregation" :collectives "congregations"}

   :alligator {
               :generic '("alligator" "lizard") :generics '("alligators" "lizards")
               :male ""  :males "" 
               :female "" :females "" 
               :child "hatchling" :children "hatchlings"
               :collective "congregation" :collectives "congregation"}

   :crocodile {
               :generic '("crocodile" "lizard") :generics '("crocodiles" "lizards")
               :male ""  :males "" 
               :female "" :females "" 
               :child "hatchling" :children "hatchlings"
               :collective "congregation" :collectives "congregation"}

   :fish {
          :generic "fish" :generics "fish"
          :male "" :males ""
          :female "" :females ""
          :child "fry" :children "fries"
          :collective "shoal" :collectives "shoals"}

   :human  {
            :generic '("human" "person") :generics '("humans" "people")
            :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
            :female '("lass" "lassie" "woman" "lady" "dame" "madam") :females '("lasses" "lassies" "women" "ladies" "dames" "madams")
            :child '("child" "kid" "youngster") :children '("children" "kids" "youngsters")
            :collective "tribe" :collectives "tribes"}

   :dwarf {
           :generic '("dwarf" "person") :generics '("dwarves" "people")
           :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
           :female '("lass" "lassie" "woman" "lady" "dame" "madam") :females '("lasses" "lassies" "women" "ladies" "dames" "madams")
           :child '("child" "kid" "youngster") :children '("children" "kids" "youngsters")
            :collective "tribe" :collectives "tribes"}


   :chimpanzee {
            :generic '("chimpanzee" "person") :generics '("chimpanzees" "people")
            :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
            :female '("lass" "lassie" "woman" "lady" "dame" "madam") :females '("lasses" "lassies" "women" "ladies" "dames" "madams")
            :child '("child" "kid" "youngster") :children '("children" "kids" "youngsters")
            :collective "tribe" :collectives "tribes"}


   :vampire  {
            :generic "vampire" :generics "vampires"
            :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
            :female '("lass" "lassie" "woman" "lady" "dame" "madam") :females '("lasses" "lassies" "women" "ladies" "dames" "madams")
            :child '("child" "kid" "youngster") :children '("children" "kids" "youngsters")
            :collective "legion" :collectives "legions"}

   :orc {
         :generic "orc" :generics "orcs"
         :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
         :female '("she-orc" "lass" "lassie" "woman" "lady" "dame" "madam") :females '("she-orcs" "lasses" "lassies" "women" "ladies" "dames" "madams")
         :child "orcling" :children "orclings"
         :collective "clan" :collectives "clans"}

   :goblin {
         :generic "goblin" :generics "goblins"
         :male "" :males ""
         :female "" :females ""
         :child "gobling" :children "goblings"
         :collective "horde" :collectives "hordes"}

   :gremlin {
         :generic "gremlin" :generics "gremlins"
         :male "" :males ""
         :female "" :females ""
         :child "gremlet" :children "gremlets"
         :collective "horde" :collectives "hordes"}

   :troll {
         :generic "troll" :generics "trolls"
         :male "" :males ""
         :female "she-troll" :females "she-trolls"
         :child "trolling" :children "trollings"
         :collective "horde" :collectives "hordes"}


   :imp {
         :generic "imp" :generics "imps"
         :male "" :males ""
         :female "" :females ""
         :child "implet" :children "implets"
         :collective "cackle" :collectives "cackles"}

   :ogre {
         :generic "ogre" :generics "ogre"
         :male "" :males ""
         :female "" :females ""
         :child "ogrelet" :children "ogrelets"
         :collective "stampede" :collectives "stampedes"}

   :elf {
         :generic "elf" :generics "elves"
         :male '("lad" "man" "fellow" "bloke" "guy" "gentleman" "dude") :males '("lads" "men" "fellows" "blokes" "guys" "gentlemen" "dudes")
         :female '("lass" "lassie" "woman" "lady" "dame" "madam") :females '("lasses" "lassies" "women" "ladies" "dames" "madams")
         :child "elfling" :children "elflings"
         :collective "drove" :collectives "droves"}

   :aye-aye {
             :generic "aye-aye" :generics "aye-ayes"
             :male "" :males ""
             :female "" :females ""
             :child "cub" :children "cubs"
             :collective "conspiracy" :collectives "conspiracies"}

   :demon {
           :generic "demon" :generics "demons"
           :male "" :males ""
           :female "she-demon" :females "she-demons"
           :child "demonling" :children "demonlings"
           :collective "legion" :collectives "legions"}
})

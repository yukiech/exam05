Ex00:

Nothing to be said


Ex01:

ASpell.hpp :
- virtual ~ASpell();
- virtual ASpell *clone() const = 0;
- Passer en public le "&operator="
- ATarget = identique a ASpell
- Dummy et Fwoosh -> construct vide, destruct vide et "virtual ATarget *clone() const;" (dans .cpp = "return (new Dummy);")


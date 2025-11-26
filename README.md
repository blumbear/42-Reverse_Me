# Reverse Me

Projet de reverse engineering en 3 niveaux. L’objectif est de:
- Analyser et « reverse » chaque binaire/exercice.
- Trouver le mot de passe associé à chaque niveau.
- Recoder la logique en C une fois comprise.

### Organisation:
- `binary/level1`, `binary/level2`, `binary/level3`: binaires.
- Les mots de passe sont dans `levelX/password` (par exemple `level1/password`).
- Une reproduction en C se trouve dans `level1/source.c`.
- Le sujet est disponible dans `en.subject.pdf`.

### Utilisation rapide:
- Décompressez l’archive `binary.tgz` dans `binary/` (voir [Décompression des binaires](#Decompression-des-binaires))
- Lancez les binaires ou inspectez-les (strings, objdump, gdb, etc.).
- Déduisez le mécanisme de vérification et le mot de passe.
- Placez/récupérez le mot de passe dans `levelX/password`.
- Recodez la vérification en C puis compilez.

### Decompression des binaires:
- Le fichier `binary.tgz` contient les trois niveaux de binaires.
- Pour extraire dans le dossier `binary/`:
  - Assurez-vous que le dossier existe: `mkdir -p binary`
  - Extrayez l’archive: `tar -xzf binary.tgz -C binary/`
- Après extraction, vous devriez avoir `binary/level1`, `binary/level2`, `binary/level3`.

Objectif final:
- Obtenir les 3 mots de passe et une implémentation C fonctionnelle pour chaque niveau.
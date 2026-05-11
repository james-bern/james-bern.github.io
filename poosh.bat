cp -f -r ./* ../../../james-bern.github.io/
cd ../..
./poosh.bat "(inner) poosh.bat"
cd ../james-bern.github.io/
git add --all
git commit -m "poosh.bat"
git push


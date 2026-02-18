cp -f -r ./* ../../james-bern.github.io/
cd ..
./poosh.bat "website/poosh.bat"
cd ../james-bern.github.io/
git add --all
git commit -m "poosh.bat"
git push


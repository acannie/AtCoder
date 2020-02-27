for file in `find ./src -name a.cpp`; do
    ls $file;
    dirname=`echo $file | cut -f 4 -d "/"`
    filename=`basename $file`
    mv $file $dirname$filename
done
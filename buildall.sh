#!/bin/bash

export PKG_CONFIG_PATH=/home/laurijssen/.local/lib/pkgconfig

for dir in services/*/ ; do
    if [ -f "$dir/Dockerfile" ]; then
        imagename=$(echo $dir | sed 's/\/$//
                                     s/services\///')

        echo "Building $imagename"

        pushd services/$imagename

        # if [ -f ./proto/service.proto ]; then
        #     protoc -I ./proto --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./proto/service.proto 
        #     protoc -I ./proto --cpp_out=. ./proto/service.proto
        # fi

        #count=`ls -1 *.cc 2>/dev/null | wc -l`
        
        # if [ $count != 0 ]; then
        #     g++ -o ./bin/main *.cc ../../lib/*.cc -I../../lib $(pkg-config --cflags --libs grpc++) -lpthread -lprotobuf
        # else
        #     gcc -o ./bin/main *.c ../../lib/*.cc -I../../lib $(pkg-config --cflags --libs grpc++) -lpthread -lprotobuf
        # fi

        if [ -f Dockerfile ]; then
            sudo docker build -t $imagename -f Dockerfile .
            sudo docker tag $imagename 192.168.56.3:5000/$imagename
            sudo docker push 192.168.56.3:5000/$imagename
        fi

        popd
    fi
done

for dir in jobs/*/ ; do
    if [ -f "$dir/Dockerfile" ]; then
        imagename=$(echo $dir | sed 's/\/$//
                                     s/jobs\///')

        echo "Building $imagename"

        pushd jobs/$imagename

        if [ -f Dockerfile ]; then
            sudo docker build -t $imagename -f Dockerfile .
            sudo docker tag $imagename 192.168.56.3:5000/$imagename
            sudo docker push 192.168.56.3:5000/$imagename
        fi

        popd
    fi
done

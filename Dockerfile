FROM gcc:latest

WORKDIR /app

COPY . .

RUN apt-get update && apt-get install -y cmake

RUN cmake -Bbuild -H. && cmake --build build

CMD ["./build/KulinGraph"]

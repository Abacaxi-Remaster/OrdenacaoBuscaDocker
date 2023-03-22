FROM gcc:latest

COPY . /usr/src/OrdenacaoBusca

WORKDIR /usr/src/OrdenacaoBusca

RUN g++ -o Test main.cpp

CMD ["./Test"]
FROM gcc:latest

WORKDIR /app

COPY . .

RUN gcc main.c -o biblioteca

CMD ["./biblioteca"]

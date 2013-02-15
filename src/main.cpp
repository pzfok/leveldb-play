#include <leveldb/db.h>
#include <iostream>


int main() {
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
  assert(status.ok());
  std::cout << "Hello world" << std::endl;
}


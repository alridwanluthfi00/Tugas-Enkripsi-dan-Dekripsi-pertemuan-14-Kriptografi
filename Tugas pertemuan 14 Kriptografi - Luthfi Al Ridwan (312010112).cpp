#include <iostream>
#include <string>

using namespace std;

string encrypt(string plaintext, char key) {
  string ciphertext = "";

  // enkripsi 
  for (int i = 0; i < plaintext.length(); i++) {
    ciphertext += plaintext[i] ^ key;
  }

  return ciphertext;
}

string decrypt(string ciphertext, char key) {
  string plaintext = "";

  // deskripsi 
  for (int i = 0; i < ciphertext.length(); i++) {
    plaintext += ciphertext[i] ^ key;
  }

  return plaintext;
}

int main() {
  int choice;
  string text;
  char key;

  cout << "Menu:" << endl;
  cout << "1. Enkripsi" << endl;
  cout << "2. Dekripsi" << endl;
  cout << "Masukkan pilihan: ";
  cin >> choice;

  switch (choice) {
  case 1:{
  cout << "Masukkan teks yang akan dienkripsi: ";
  cin.ignore();
  getline(cin, text);

  cout << "Masukkan kunci enkripsi (angka 1-5): ";
  cin >> key;

  string ciphertext = encrypt(text, key);
  cout << "Chipertext: " << ciphertext << endl;

  string decrypted = decrypt(ciphertext, key);
  cout << "Teks asli: " << decrypted << endl;

  return 0;
}
    case 2:{
      cout << "Masukkan chipertext yang akan didekripsi: ";
      cin.ignore();
      getline(cin, text);

      cout << "Masukkan kunci dekripsi (angka 1-5): ";
      cin >> key;

      string decrypted = decrypt(text, key);
      cout << "Teks asli: " << decrypted << endl;
      break;}
    default:
      cout << "Pilihan tidak valid" << endl;
  }

  return 0;
}


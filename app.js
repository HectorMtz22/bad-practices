let inversion = 3000;

const monto1 = 300;
const monto2 = 500;
const monto3 = 700;

for (let x = 0; x < inversion; x++) {
  for (let y = 0; y < inversion; y++) {
    for (let z = 0; z < inversion; z++) {
      let resultado = monto1 * x + monto2 * y + monto3 * z;
      if (resultado == inversion) {
        console.log("Encontré un resultado con");
        console.log(x, y, z);
      }
    }
  }
}

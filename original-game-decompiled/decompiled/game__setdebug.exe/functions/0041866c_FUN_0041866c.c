
/* ==== FUN_0041866c @ 0041866c ==== 
 * signature: undefined __register FUN_0041866c(HANDLE param_1, int * param_2, undefined4 * param_3, uint param_4)
 * body: 0041866c-004186ce
 */

void FUN_0041866c(HANDLE param_1,int *param_2,undefined4 *param_3,uint param_4)

{
  uint local_2c [3];
  ushort local_1e;
  byte local_1c;
  undefined4 local_18;
  int local_c;
  
  FUN_00418588(param_1,local_2c,param_4);
  if (local_1e < 9) {
    if (local_c == 0) {
      *param_2 = (1 << ((byte)local_1e & 0x1f)) * 4 + 0x28;
    }
    else {
      *param_2 = local_c * 4 + 0x28;
    }
  }
  else {
    *param_2 = 0x28;
    if ((local_1c & 3) != 0) {
      *param_2 = *param_2 + 0xc;
    }
  }
  *param_3 = local_18;
  return;
}



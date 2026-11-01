
/* ==== FUN_00432ef0 @ 00432ef0 ==== 
 * signature: int __cdecl FUN_00432ef0(float param_1, float param_2, float param_3)
 * body: 00432ef0-00432f32
 */

int __cdecl FUN_00432ef0(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = (float *)&DAT_00597eb8;
  do {
    if (pfVar1[-1] == param_1) {
      if (*pfVar1 == param_2) {
        if (pfVar1[1] == param_3) {
          return iVar2;
        }
      }
    }
    pfVar1 = pfVar1 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar1 < 0x597f30);
  return -1;
}



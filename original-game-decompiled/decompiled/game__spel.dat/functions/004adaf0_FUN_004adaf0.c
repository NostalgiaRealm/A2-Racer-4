
/* ==== FUN_004adaf0 @ 004adaf0 ==== 
 * signature: undefined __cdecl FUN_004adaf0(uint * param_1, int param_2, float * param_3, undefined4 param_4, undefined4 param_5, int * param_6, undefined4 * param_7, int * param_8)
 * body: 004adaf0-004adbda
 */

void __cdecl
FUN_004adaf0(uint *param_1,int param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,undefined4 *param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_1;
  iVar3 = 0;
  FUN_004ad3d0((void *)(DAT_00715f00 + uVar1 * 0x994),param_3,param_4,param_5,param_6,param_7,
               param_8);
  iVar2 = 1;
  if (*param_6 != -1) {
    *param_1 = uVar1;
    return;
  }
  do {
    if (param_2 * 2 + 1 <= iVar2) {
      *param_1 = uVar1;
      return;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = iVar3 + 1;
    }
    uVar1 = FUN_004a71e0(uVar1 + iVar3);
    FUN_004ad3d0((void *)(DAT_00715f00 + uVar1 * 0x994),param_3,param_4,param_5,param_6,param_7,
                 param_8);
    iVar2 = iVar2 + 1;
    iVar3 = -iVar3;
  } while (*param_6 == -1);
  *param_1 = uVar1;
  return;
}



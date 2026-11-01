
/* ==== FUN_0055a06b @ 0055a06b ==== 
 * signature: int __cdecl FUN_0055a06b(int * param_1, int param_2, DWORD param_3)
 * body: 0055a06b-0055a0f6
 */

int __cdecl FUN_0055a06b(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    DAT_0074dc60 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_00562c10((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_0055a5de(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_00562b76(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}




/* ==== FUN_00539320 @ 00539320 ==== 
 * signature: undefined __cdecl FUN_00539320(int param_1, int param_2)
 * body: 00539320-0053940f
 */

void __cdecl FUN_00539320(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfbffffff;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    piVar3 = (int *)(iVar4 + 8);
    while (iVar1 != 0) {
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfdffffff;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar4 = FUN_00514af0(*(int **)(param_2 + 0x34));
    uVar2 = *(uint *)(param_2 + 0x50);
    if ((uVar2 & 0x8000000) == 0) {
      if (DAT_0074c03c + 5 < iVar4) {
        *(uint *)(param_2 + 0x50) = uVar2 | 0x8000000;
        DAT_0074cdd8 = DAT_0074cdd8 + 1;
      }
    }
    else if ((iVar4 <= DAT_0074c03c + 5) && ((iVar4 == DAT_0074c03c || (DAT_0074c6b0 != 0)))) {
      *(uint *)(param_2 + 0x50) = uVar2 & 0xf7ffffff;
    }
    if ((*(uint *)(param_2 + 0x50) & 0x8000000) == 0) {
      FUN_0051e2b0(*(undefined4 **)(param_2 + 0x28),DAT_0074c5f4);
      *(undefined4 *)(param_2 + 0x28) = 0;
      iVar4 = *(int *)(param_2 + 0x38);
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 4);
        piVar3 = (int *)(iVar4 + 8);
        while (iVar1 != 0) {
          *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfdffffff;
          iVar1 = *piVar3;
          piVar3 = piVar3 + 1;
        }
      }
    }
  }
  return;
}



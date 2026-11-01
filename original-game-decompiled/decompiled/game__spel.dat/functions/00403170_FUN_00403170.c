
/* ==== FUN_00403170 @ 00403170 ==== 
 * signature: undefined __thiscall FUN_00403170(void * this, int param_1)
 * body: 00403170-004031b5
 */

void __thiscall FUN_00403170(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x34);
  iVar2 = 4;
  do {
    if (*(char *)(*piVar1 + 0x25) == '\x01') {
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (0 < iVar3) {
    *(undefined4 *)((int)this + 0x30) = 0;
    return;
  }
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)((int)this + 0x30) = (float)(fVar4 + (float10)*(float *)((int)this + 0x30));
  return;
}



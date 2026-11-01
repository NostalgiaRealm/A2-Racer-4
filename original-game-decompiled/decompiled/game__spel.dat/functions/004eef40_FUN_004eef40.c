
/* ==== FUN_004eef40 @ 004eef40 ==== 
 * signature: float10 __thiscall FUN_004eef40(int param_1, int param_2)
 * body: 004eef40-004eefa3
 */

float10 __thiscall FUN_004eef40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    iVar2 = *(int *)(param_1 + 0x8c);
    iVar4 = 0;
    if (0 < iVar2) {
      piVar5 = (int *)(param_1 + 0xc);
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 4) + *piVar5 * 0x28;
        iVar3 = FUN_004edd30(iVar1);
        if (iVar3 == param_2) {
          return (float10)*(float *)(iVar1 + 0x18);
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return (float10)0.0;
}




/* ==== FUN_0047ea10 @ 0047ea10 ==== 
 * signature: undefined __fastcall FUN_0047ea10(int param_1)
 * body: 0047ea10-0047ea37
 */

void __fastcall FUN_0047ea10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x308);
  iVar2 = 0x1a;
  do {
    if (*piVar1 == -1) {
      *piVar1 = piVar1[-0x40];
      piVar1[1] = piVar1[-0x3f];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



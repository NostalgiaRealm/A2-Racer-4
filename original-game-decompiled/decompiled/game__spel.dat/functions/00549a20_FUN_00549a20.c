
/* ==== FUN_00549a20 @ 00549a20 ==== 
 * signature: undefined __fastcall FUN_00549a20(void * param_1)
 * body: 00549a20-00549a63
 */

void __fastcall FUN_00549a20(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = *(int **)((int)param_1 + 0x20);
  if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
LAB_00549a2c:
    piVar3 = piVar2;
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar4 = piVar3;
      if (piVar1[0x19] < piVar3[0x19]) {
        do {
          FUN_005499e0(param_1,piVar4,piVar1);
          piVar4 = (int *)piVar1[1];
          piVar2 = piVar3;
          if (piVar4 == (int *)0x0) break;
        } while (piVar1[0x19] < piVar4[0x19]);
      }
      goto LAB_00549a2c;
    }
  }
  return;
}



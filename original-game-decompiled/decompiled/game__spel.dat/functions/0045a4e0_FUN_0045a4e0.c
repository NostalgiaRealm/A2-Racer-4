
/* ==== FUN_0045a4e0 @ 0045a4e0 ==== 
 * signature: undefined __fastcall FUN_0045a4e0(int * param_1)
 * body: 0045a4e0-0045a4ff
 */

void __fastcall FUN_0045a4e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [16];
  
  iVar1 = *param_1;
  puVar3 = auStack_48;
  for (iVar2 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(iVar1 + 4))();
  return;
}



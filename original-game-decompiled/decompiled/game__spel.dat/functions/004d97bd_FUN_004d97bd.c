
/* ==== FUN_004d97bd @ 004d97bd ==== 
 * signature: undefined __thiscall FUN_004d97bd(void * this, undefined4 param_1, int param_2)
 * body: 004d97bd-004d9828
 */

void __thiscall FUN_004d97bd(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int unaff_ESI;
  int in_stack_00000018;
  
  puVar2 = FUN_00479930(this,(undefined1 *)&param_1);
  puVar3 = (uint *)&DAT_0057629c;
  if (*(uint **)(puVar2 + 4) != (uint *)0x0) {
    puVar3 = *(uint **)(puVar2 + 4);
  }
  FUN_00559d4e(*(LPVOID *)(*(int *)(unaff_ESI + 4) + in_stack_00000018));
  puVar3 = FUN_005686b8(puVar3);
  *(uint **)(*(int *)(unaff_ESI + 4) + in_stack_00000018) = puVar3;
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_2 + -1) = cVar1 + -1;
      return;
    }
    FUN_0054b339((char *)(param_2 + -1));
    return;
  }
  return;
}



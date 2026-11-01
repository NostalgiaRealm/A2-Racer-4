
/* ==== FUN_004d9570 @ 004d9570 ==== 
 * signature: undefined __thiscall FUN_004d9570(void * this)
 * body: 004d9570-004d9618
 */

void __thiscall FUN_004d9570(void *this)

{
  char cVar1;
  undefined1 *puVar2;
  uint *puVar3;
  void *unaff_ESI;
  void *unaff_retaddr;
  int in_stack_0000003c;
  void *in_stack_00000048;
  undefined4 uStack00000050;
  
  puVar2 = FUN_00479930(this,&stack0x00000038);
  puVar3 = *(uint **)(puVar2 + 4);
  uStack00000050 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)&DAT_0057629c;
  }
  puVar3 = FUN_005686b8(puVar3);
  if (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4) {
    do {
      FUN_004d8ff0(unaff_ESI,unaff_retaddr);
    } while (*(int *)((int)unaff_ESI + 0xc) < *(int *)((int)unaff_ESI + 8) + 4);
  }
  *(uint **)(*(int *)((int)unaff_ESI + 4) + *(int *)((int)unaff_ESI + 8)) = puVar3;
  *(int *)((int)unaff_ESI + 8) = *(int *)((int)unaff_ESI + 8) + 4;
  if (in_stack_0000003c != 0) {
    cVar1 = *(char *)(in_stack_0000003c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(in_stack_0000003c + -1) = cVar1 + -1;
      ExceptionList = in_stack_00000048;
      return;
    }
    FUN_0054b339((char *)(in_stack_0000003c + -1));
    ExceptionList = in_stack_00000048;
    return;
  }
  ExceptionList = in_stack_00000048;
  return;
}



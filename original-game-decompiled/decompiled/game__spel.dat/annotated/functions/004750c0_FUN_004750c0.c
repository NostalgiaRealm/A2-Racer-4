
/* ==== FUN_004750c0 @ 004750c0 ==== 
 * signature: undefined __cdecl FUN_004750c0(int param_1, int param_2, float param_3, float param_4, float param_5)
 * body: 004750c0-00475108;0047510c-004751c5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00475109-0047510b
 */

void __cdecl FUN_004750c0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_stack_00000024;
  undefined1 local_200 [512];
  
  FUN_004a02e0((int)local_200);
  iVar1 = 0;
  iVar3 = 3;
  iVar2 = param_1 * 0xf0;
  if (*(int *)(iVar2 + 0x18 + DAT_00715e50) != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Can_not_add_constraint_t_005a8e68);
  }
  if (in_stack_00000024 != 0.0) {
    FUN_004a0430(local_200,in_stack_00000024);
  }
  if (param_2 == 1) {
    iVar1 = 3;
  }
  if (param_3 != 0.0) {
    iVar3 = 2;
  }
  if (param_4 != 0.0) {
    iVar3 = iVar3 + -1;
  }
  if (param_5 != 0.0) {
    iVar3 = iVar3 + -1;
  }
  FUN_004a0390(local_200,*(int *)(iVar2 + 0x10 + DAT_00715e50),(float *)&stack0x00000018,&param_3,
               iVar1,iVar3);
  (**(code **)(**(int **)(iVar2 + 0x10 + DAT_00715e50) + 8))(local_200);
  return;
}



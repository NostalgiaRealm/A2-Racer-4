
/* ==== FUN_0043ae4a @ 0043ae4a ==== 
 * signature: undefined __cdecl FUN_0043ae4a(int param_1)
 * body: 0043ae4a-0043af56
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

void __cdecl FUN_0043ae4a(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000014;
  int iStack00000018;
  int in_stack_00000020;
  uint in_stack_00000024;
  
  iVar4 = 0;
  if ((DAT_006fb894 == 0) && (param_1 != 2)) {
    FUN_004c88b0(param_1,2,0,0,DAT_005b3798 + -1,DAT_005b379c + -1,0);
    uVar1 = FUN_004c81b0(in_stack_00000024,8);
    iStack00000018 = FUN_004c48f0(DAT_00740890);
    in_stack_00000024 = 0;
    iVar3 = DAT_005b3798;
    if (0 < DAT_005b379c) {
      do {
        iVar5 = 0;
        if (0 < iVar3 / 2) {
          puVar2 = (uint *)(iStack00000018 + iVar4 * 4);
          do {
            *puVar2 = uVar1 | uVar1 << 0x10;
            iVar5 = iVar5 + 1;
            puVar2 = puVar2 + 1;
            iVar3 = DAT_005b3798;
          } while (iVar5 < DAT_005b3798 / 2);
        }
        iVar4 = iVar4 + (in_stack_00000014 >> 2);
        in_stack_00000024 = in_stack_00000024 + 1;
        param_1 = in_stack_00000020;
      } while ((int)in_stack_00000024 < DAT_005b379c);
    }
    FUN_004c4a20(DAT_00740890,iStack00000018);
    FUN_004c88b0(2,param_1,0,0,DAT_005b3798 + -1,DAT_005b379c + -1,0);
  }
  return;
}



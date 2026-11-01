
/* ==== FUN_00431810 @ 00431810 ==== 
 * signature: undefined __cdecl FUN_00431810(undefined4 * param_1, int param_2)
 * body: 00431810-0043183c;00431840-0043199a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043183d-0043183f
 */

void __cdecl FUN_00431810(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = FUN_004316d0(param_2);
  if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_RK4_TrailerCallback_func_00597e0c);
  }
  if ((&DAT_006c3318)[iVar8 * 0x34] == '\x01') {
    iVar9 = param_2 * 0xf0;
    puVar1 = (undefined4 *)(iVar9 + 0xbc + DAT_00715e50);
    iVar10 = DAT_0073b0d0 + *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9;
    uVar2 = *(undefined4 *)(iVar10 + 0x50);
    uVar3 = *(undefined4 *)(iVar10 + 0x54);
    uVar4 = *(undefined4 *)(iVar10 + 0x58);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    *(undefined4 *)(iVar10 + 0x50) = param_1[6];
    *(undefined4 *)(iVar10 + 0x54) = param_1[7];
    *(undefined4 *)(iVar10 + 0x58) = param_1[8];
    puVar1 = (undefined4 *)(iVar9 + 0xbc + DAT_00715e50);
    *puVar1 = param_1[3];
    puVar1[1] = param_1[4];
    puVar1[2] = param_1[5];
    *(undefined4 *)(iVar9 + 0xd4 + DAT_00715e50) = 0;
    *(undefined4 *)(iVar9 + 0xdc + DAT_00715e50) = 0;
    FUN_00430860(&DAT_006c32f0 + iVar8 * 0xd);
    iVar8 = iVar9 + 0xd4 + DAT_00715e50;
    *param_1 = *(undefined4 *)(iVar9 + 0xd4 + DAT_00715e50);
    param_1[1] = *(undefined4 *)(iVar8 + 4);
    param_1[2] = *(undefined4 *)(iVar8 + 8);
    iVar8 = DAT_0073b0d0 + *(int *)(iVar9 + 0x24 + DAT_00715e50) * 0xa9;
    *(undefined4 *)(iVar8 + 0x50) = uVar2;
    *(undefined4 *)(iVar8 + 0x54) = uVar3;
    *(undefined4 *)(iVar8 + 0x58) = uVar4;
    puVar1 = (undefined4 *)(iVar9 + 0xbc + DAT_00715e50);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



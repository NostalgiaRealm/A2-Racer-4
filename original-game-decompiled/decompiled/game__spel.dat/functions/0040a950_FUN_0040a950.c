
/* ==== FUN_0040a950 @ 0040a950 ==== 
 * signature: undefined __cdecl FUN_0040a950(int param_1)
 * body: 0040a950-0040a9f4;0040a9f8-0040aaeb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040a9f5-0040a9f7
 */

void __cdecl FUN_0040a950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_7c;
  undefined4 local_78 [27];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005696fc;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  iVar2 = 0;
  local_7c = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + iVar2) == '\x01') {
        local_7c = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00715e54);
  }
  ExceptionList = &pvStack_c;
  FUN_004bf5d0(local_78);
  iVar2 = 0;
  local_4 = 0;
  if (-1 < local_7c) {
    do {
      if (*(int *)(DAT_00715e50 + 0x5c + iVar6) != 0) {
        if ((iVar6 < 0) || (DAT_00715e54 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if ((*(char *)(DAT_00715e60 + iVar2) != '\0') &&
           (*(int *)(DAT_00715e50 + 0x34 + iVar6) == param_1)) {
          iVar1 = *(int *)(DAT_00715e50 + 0x24 + iVar6);
          piVar4 = (int *)(DAT_0073b0d0 + iVar1 * 0xa9);
          if ((*piVar4 == 1) || (*piVar4 != 2)) {
            iVar3 = *(int *)((int)piVar4 + 0x99);
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(piVar4[1] * 9 + 4 + DAT_0073b168) + piVar4[2] * 4) *
                             0x10 + DAT_0073b120);
          }
          puVar7 = (undefined4 *)(DAT_0073b5c8 + 0xc + iVar3 * 0xac);
          puVar8 = local_78;
          for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          if (DAT_005cd9c8 == 0) {
            FUN_0040a570((int)local_78,iVar1);
          }
          else {
            FUN_0040a730((int)local_78,iVar1);
          }
        }
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0xf0;
    } while (iVar2 <= local_7c);
  }
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = pvStack_c;
  return;
}



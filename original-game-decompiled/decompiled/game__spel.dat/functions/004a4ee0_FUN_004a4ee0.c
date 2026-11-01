
/* ==== FUN_004a4ee0 @ 004a4ee0 ==== 
 * signature: undefined __fastcall FUN_004a4ee0(int param_1)
 * body: 004a4ee0-004a503d;004a5041-004a5050
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a503e-004a5040
 */

void __fastcall FUN_004a4ee0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_68 [4];
  char *local_64;
  uint local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xec);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_004a24d0(puVar2);
  }
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_68,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_Unable_to_create_object_of_type__005af5c8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar3 = FUN_00402a00(local_68,uVar5,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar7 = s_Unable_to_create_object_of_type__005af5c8;
    pcVar8 = local_64;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_64[uVar5] = '\0';
    local_60 = uVar5;
  }
  local_4 = 1;
  puVar4 = FUN_0049df90(local_58,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  local_4._0_1_ = 2;
  puVar4 = FUN_0047c9a0(local_48,puVar4,(int)local_68);
  local_4._0_1_ = 3;
  puVar4 = FUN_0047c9a0(local_38,puVar4,param_1 + 4);
  local_4._0_1_ = 4;
  FUN_00558826(local_28);
  FUN_004028f0(local_1c,'\0');
  local_4._0_1_ = 6;
  local_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(local_1c,puVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00583558);
}



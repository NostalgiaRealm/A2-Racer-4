
/* ==== FUN_0041e6c0 @ 0041e6c0 ==== 
 * signature: undefined __stdcall FUN_0041e6c0(void)
 * body: 0041e6c0-0041e7bf;0041e7c3-0041e909
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041e7c0-0041e7c2
 */

void FUN_0041e6c0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569ea2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00406eb0();
  FUN_004028f0(local_2c,'\0');
  iVar6 = 0;
  local_4 = 0;
  if (0 < DAT_005d3310) {
    local_38 = &DAT_005d330c;
    puVar7 = &DAT_005d1948;
    do {
      iVar3 = *local_38;
      puVar7[-0x3e] = iVar3;
      iVar3 = FUN_00407030(this,iVar3);
      iVar3 = FUN_00406e70(this,iVar3);
      FUN_00403140(puVar7 + -0x19,iVar3);
      puVar4 = FUN_0049df90(local_1c,&DAT_00594ce8);
      local_4._0_1_ = 1;
      FUN_004093c0(local_2c,puVar4,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_1c,'\x01');
      puVar4 = local_2c;
      this_00 = FUN_0040ebe0();
      iVar3 = FUN_0040f6f0(this_00,(int)puVar4);
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____Agent_type___s__not_fou_00594d18);
      }
      puVar4 = FUN_0040ebe0();
      if ((iVar3 < 0) || (iVar5 = (*(code *)**(undefined4 **)(puVar4 + 0x1c))(), iVar5 <= iVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      FUN_004a6980(iVar5,(byte *)s__s__d____Invalid_agent_type_inde_00595090);
      iVar3 = *(int *)(*(int *)(*(int *)(puVar4 + 0x20) + 4) + 0x10 + iVar3 * 0x14);
      puVar7[-9] = iVar3;
      puVar4 = FUN_0040ebe0();
      if ((iVar3 < 0) || (iVar5 = (*(code *)**(undefined4 **)(puVar4 + 0x24))(), iVar5 <= iVar3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_object_index____0058fd14);
      uVar2 = DAT_006fba58;
      puVar7[-4] = 0;
      puVar7[1] = uVar2;
      *puVar7 = 0;
      puVar7[0x40] = 1;
      puVar7[0x41] = 0;
      puVar7[0x4b] = 0;
      puVar7[0x4d] = 0x7f7fffff;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *(undefined1 *)(puVar7 + -1) = 0;
      *(undefined1 *)((int)puVar7 + -3) = 0;
      puVar7[-0x2b] = uVar2;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xa5;
      local_38 = local_38 + 1;
    } while (iVar6 < DAT_005d3310);
  }
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((LPVOID)(local_28 + -1));
  }
  ExceptionList = local_c;
  return;
}



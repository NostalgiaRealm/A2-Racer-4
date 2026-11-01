
/* ==== FUN_0042b1c0 @ 0042b1c0 ==== 
 * signature: undefined4 __fastcall FUN_0042b1c0(void * param_1)
 * body: 0042b1c0-0042b239;0042b23d-0042b2c4;0042b2c8-0042b401
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042b23a-0042b23c 0042b2c5-0042b2c7
 */

undefined4 __fastcall FUN_0042b1c0(void *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int local_17c;
  int iStack_174;
  char *pcStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  void *local_164;
  int local_160;
  CHAR local_15c [4];
  undefined4 auStack_158 [3];
  char acStack_14c [64];
  byte abStack_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a265;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_00596ff4);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  local_160 = FUN_004c3cd0(PTR_s_Connected_Object_Types_00596a04,PTR_s_Count_00596a08);
  if (100 < local_160) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Too_many___d__connected_o_00597030);
  }
  local_17c = 0;
  if (local_160 < 1) {
    uVar5 = (undefined3)((uint)local_160 >> 8);
  }
  else {
    do {
      local_164 = param_1;
      FUN_005587a3(local_15c,&DAT_00597074);
      FUN_004c3d10(PTR_s_Connected_Object_Types_00596a04,local_15c,(LPSTR)abStack_10c,0xff);
      iVar2 = FUN_004c3d60(abStack_10c,(uint *)0x0);
      if (iVar2 != 5) {
        FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_00597078);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s___s___d_Illegal_description_of_c_005970b4);
      }
      FUN_004c3f10(0,acStack_14c,0x3f);
      uVar6 = 0xffffffff;
      pcVar3 = acStack_14c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      pcStack_170 = (char *)0x0;
      uStack_16c = 0;
      uStack_168 = 0;
      uVar4 = FUN_00402a00(&iStack_174,uVar6,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar3 = acStack_14c;
        pcVar8 = pcStack_170;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar8 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcStack_170[uVar6] = '\0';
        param_1 = local_164;
        uStack_16c = uVar6;
      }
      uStack_4 = 0;
      FUN_0042ac80(param_1,&iStack_174);
      uStack_4 = 0xffffffff;
      if (pcStack_170 != (char *)0x0) {
        cVar1 = pcStack_170[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_170 + -1);
        }
        else {
          pcStack_170[-1] = cVar1 + -1;
        }
      }
      pcStack_170 = (char *)0x0;
      uStack_16c = 0;
      uStack_168 = 0;
      FUN_004354a0(1);
      FUN_004354a0(2);
      FUN_004354a0(3);
      FUN_0042ade0(param_1,auStack_158);
      uVar4 = FUN_004c3ec0(4);
      FUN_0042ae00(param_1,uVar4);
      local_17c = local_17c + 1;
      param_1 = (void *)((int)param_1 + 0x24);
    } while (local_17c < local_160);
    uVar5 = (undefined3)((uint)local_17c >> 8);
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar5,1);
}



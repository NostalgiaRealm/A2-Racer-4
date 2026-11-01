
/* ==== FUN_0047e4e0 @ 0047e4e0 ==== 
 * signature: undefined4 __thiscall FUN_0047e4e0(void * this, byte param_1)
 * body: 0047e4e0-0047e5cf
 */

undefined4 __thiscall FUN_0047e4e0(void *this,byte param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056be38;
  local_c = ExceptionList;
  local_1c[0] = param_1;
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f4c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9f4c;
    pcVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_18[uVar3] = '\0';
    local_14 = uVar3;
  }
  uVar3 = (uint)param_1;
  local_4 = 0;
  FUN_004878f0(uVar3,0,0xff);
  if (local_18 == (char *)0x0) {
    uVar2 = *(undefined4 *)((int)this + uVar3 * 8);
  }
  else {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
      uVar2 = *(undefined4 *)((int)this + uVar3 * 8);
    }
    else {
      local_18[-1] = cVar1 + -1;
      uVar2 = *(undefined4 *)((int)this + uVar3 * 8);
    }
  }
  ExceptionList = local_c;
  return uVar2;
}



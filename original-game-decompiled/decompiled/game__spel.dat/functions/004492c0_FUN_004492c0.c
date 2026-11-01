
/* ==== FUN_004492c0 @ 004492c0 ==== 
 * signature: undefined __stdcall FUN_004492c0(void)
 * body: 004492c0-00449451
 */

void FUN_004492c0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00449460();
  FUN_00449230();
  FUN_004494d0();
  FUN_0044a690();
  FUN_0044aa20();
  FUN_0044acb0();
  FUN_0044ad40();
  FUN_0044a540();
  FUN_0044a590();
  FUN_0044a5e0();
  FUN_0044a630();
  FUN_0044a4f0();
  FUN_0044a4a0();
  FUN_0044a230();
  FUN_0044a1f0();
  FUN_0044a1b0();
  FUN_0044a110();
  FUN_0044a0d0();
  FUN_0044a090();
  FUN_0044a010();
  FUN_0044a050();
  FUN_00449ea0();
  FUN_00449e20();
  FUN_00449cb0();
  FUN_00449b30();
  FUN_00449610();
  FUN_00449650();
  FUN_00449af0();
  FUN_004495d0();
  FUN_00449590();
  FUN_00449510();
  FUN_00449550();
  FUN_00449690();
  FUN_004489a0(&DAT_006fa558,(byte *)s_CAR_CFG_INI_0059f448,(byte *)s_Car_Configurations_0059f434);
  uVar3 = 0xffffffff;
  pcVar5 = s_Car_Configurations_0059f454;
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
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Car_Configurations_0059f454;
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
  local_4 = 0;
  FUN_004244b0((int)local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}



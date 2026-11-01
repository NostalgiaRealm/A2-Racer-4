
/* ==== FUN_004eba48 @ 004eba48 ==== 
 * signature: undefined4 * __fastcall FUN_004eba48(undefined4 * param_1)
 * body: 004eba48-004eba4f
 */

undefined4 * __fastcall FUN_004eba48(undefined4 *param_1)

{
  undefined4 *this;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack_5;
  
  this = param_1 + 1;
  uVar3 = 0xffffffff;
  *(undefined1 *)this = uStack_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcVar5 = s_CBase_005af210;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = param_1[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(this,'\x01');
      *param_1 = &PTR_FUN_0057820c;
      return param_1;
    }
    if (((uint)param_1[4] < 0x20) && (uVar3 <= (uint)param_1[4])) goto LAB_004ebafc;
    FUN_004028f0(this,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this,'\0');
    *param_1 = &PTR_FUN_0057820c;
    return param_1;
  }
  FUN_00402b20(uVar3);
LAB_004ebafc:
  pcVar5 = s_CBase_005af210;
  pcVar6 = (char *)param_1[2];
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
  param_1[3] = uVar3;
  *(undefined1 *)(param_1[2] + uVar3) = 0;
  *param_1 = &PTR_FUN_0057820c;
  return param_1;
}




/* ==== FUN_00414140 @ 00414140 ==== 
 * signature: undefined4 __cdecl FUN_00414140(char * param_1, undefined4 * param_2, int * param_3)
 * body: 00414140-00414319
 */

undefined4 __cdecl FUN_00414140(char *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint local_2c;
  int local_28;
  int *local_24;
  int local_1c;
  int local_18;
  int local_14;
  char local_10 [4];
  int local_c [2];
  undefined4 local_4;
  
  uVar1 = (&DAT_005d1bb8)[(int)param_1 * 0xe];
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x40) == 0) {
      local_28 = (-(uint)((uVar1 & 0x80) != 0) & 0xfffffffe) + 2;
    }
    else {
      local_28 = 1;
    }
  }
  else {
    local_28 = 3;
  }
  FUN_004140b0((int)param_1,&local_1c,&local_18,&local_14);
  iVar2 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  local_2c = 0;
  local_10[0] = '\0';
  local_10[1] = 0;
  local_10[2] = 0;
  local_24 = local_c;
  pcVar4 = local_10 + 2;
  local_c[0] = *(int *)(iVar2 * 0xf0 + 0x3c + DAT_00715e50);
  param_1 = local_10 + 1;
  pcVar5 = local_10;
  iVar6 = local_c[0];
  do {
    iVar3 = FUN_00422f70(iVar2,iVar6,local_1c,local_28);
    if (*pcVar5 == '\x01') {
      iVar3 = -1;
    }
    *pcVar5 = '\x01';
    if (iVar3 == -1) {
      iVar3 = FUN_00422f70(iVar2,iVar6,local_18,local_28);
      if (*param_1 == '\x01') {
        iVar3 = -1;
      }
      *pcVar5 = '\x01';
      if (iVar3 != -1) goto LAB_00414280;
      iVar3 = FUN_00422f70(iVar2,iVar6,local_14,local_28);
      if (*pcVar4 == '\x01') {
        iVar3 = -1;
      }
      *pcVar4 = '\x01';
      if (iVar3 != -1) goto LAB_00414280;
      if ((int)local_2c < 1) {
        return local_2c & 0xffffff00;
      }
      local_2c = local_2c - 1;
      param_1 = param_1 + -8;
      pcVar5 = pcVar5 + -8;
      pcVar4 = pcVar4 + -8;
      local_24 = local_24 + -2;
      iVar3 = iVar6;
    }
    else {
LAB_00414280:
      local_2c = local_2c + 1;
      param_1 = param_1 + 8;
      pcVar5 = pcVar5 + 8;
      pcVar4 = pcVar4 + 8;
      local_24 = local_24 + 2;
      if ((int)local_2c < 2) {
        *pcVar5 = '\0';
        *param_1 = '\0';
        *pcVar4 = '\0';
        *local_24 = iVar3;
      }
    }
    iVar6 = iVar3;
    if (1 < (int)local_2c) {
      *param_2 = local_4;
      *param_3 = iVar3;
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
  } while( true );
}



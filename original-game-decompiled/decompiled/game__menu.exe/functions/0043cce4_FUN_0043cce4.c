
/* ==== FUN_0043cce4 @ 0043cce4 ==== 
 * signature: undefined __register FUN_0043cce4(undefined * param_1, int param_2, int param_3)
 * body: 0043cce4-0043cde8
 */

void FUN_0043cce4(undefined *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1a;
  byte local_19;
  int local_18;
  int local_14;
  int local_10;
  undefined *local_c;
  byte local_5;
  
  local_14 = 0;
  local_18 = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_10 = param_3;
  local_c = param_1;
  if (param_2 != 0) {
    iVar2 = FUN_0043f018(param_2);
  }
  if (local_10 != 0) {
    iVar3 = FUN_0043f018(local_10);
  }
  local_1a = '\0';
  while ((local_1a == '\0' && ((local_14 < iVar2 || (local_18 < iVar3))))) {
    local_5 = 0xff;
    local_19 = 0xff;
    if (local_14 < iVar2) {
      iVar1 = FUN_0043f028(param_2,local_14);
      local_5 = *(byte *)(iVar1 + 0x33);
    }
    if (local_18 < iVar3) {
      iVar1 = FUN_0043f028(local_10,local_18);
      local_19 = *(byte *)(iVar1 + 0x33);
    }
    if (local_19 < local_5) {
      local_5 = local_19;
      local_1a = FUN_0043cc84(&local_18,local_10,local_c,(int)&stack0xfffffffc);
    }
    else {
      local_1a = FUN_0043cc84(&local_14,param_2,local_c,(int)&stack0xfffffffc);
    }
    while ((local_14 < iVar2 &&
           (iVar1 = FUN_0043f028(param_2,local_14), *(byte *)(iVar1 + 0x33) <= local_5))) {
      local_14 = local_14 + 1;
    }
    while ((local_18 < iVar3 &&
           (iVar1 = FUN_0043f028(local_10,local_18), *(byte *)(iVar1 + 0x33) <= local_5))) {
      local_18 = local_18 + 1;
    }
  }
  return;
}



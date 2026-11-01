
/* ==== FUN_0042eea0 @ 0042eea0 ==== 
 * signature: undefined __thiscall FUN_0042eea0(void * this, undefined4 param_1, byte * param_2)
 * body: 0042eea0-0042f09d
 */

void __thiscall FUN_0042eea0(void *this,undefined4 param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  CHAR local_60 [32];
  CHAR local_40 [64];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,param_2);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  set_ini_filename(pcVar3);
  FUN_005587a3(local_60,&DAT_00597a3c);
  iVar2 = read_ini_value_setting(local_60,s_NrGears_00597a44);
  *(int *)this = iVar2;
  if ((iVar2 < 0) || (6 < iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  FUN_00448c90(&DAT_006fa558,param_2);
  FUN_004a6980(iVar2,(byte *)s__s___d__Incorrect_value_for_nr_o_00597a70);
  FUN_0042ede0(this);
  FUN_0042e9b0(this,local_60);
  FUN_0042ea90(this,local_60);
  FUN_0042eb70(this,local_60);
  FUN_0042ec50(this,local_60);
  FUN_0042ed80(this,local_60);
  read_ini_string_setting(local_60,s_Start_00597ac8,local_40,0x3f);
  iVar2 = -1;
  pcVar3 = local_40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980((uint)(iVar2 != -2),(byte *)s__s___d__No_sound_type_name_found_00597ad0);
  uVar4 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(undefined4 *)((int)this + 8) = uVar4;
  read_ini_string_setting(local_60,s_SwitchGear_00597b0c,local_40,0x3f);
  iVar2 = -1;
  pcVar3 = local_40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980((uint)(iVar2 != -2),(byte *)s__s___d__No_sound_type_name_found_00597b18);
  iVar2 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(int *)((int)this + 0xc) = iVar2;
  iVar2 = FUN_0049eb50(&DAT_006fbb5c,iVar2);
  pcVar3 = *(char **)(iVar2 + 0x1c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  uVar5 = FUN_004c7c50(pcVar3,0);
  *(uint *)(iVar2 + 0x38) = uVar5;
  iVar2 = read_ini_value_setting(local_60,s_MinRpm_00597b58);
  FUN_0042ee70(this,0,iVar2);
  uVar4 = read_ini_value_setting(local_60,s_MaxRpm_00597b60);
  *(undefined4 *)((int)this + 0x18) = uVar4;
  uVar4 = read_ini_value_setting(local_60,s_MinSpeed_00597b68);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  uVar4 = read_ini_value_setting(local_60,s_MaxSpeed_00597b74);
  *(undefined4 *)((int)this + 0x20) = uVar4;
  return;
}



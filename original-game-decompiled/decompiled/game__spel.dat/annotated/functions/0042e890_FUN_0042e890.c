
/* ==== FUN_0042e890 @ 0042e890 ==== 
 * signature: undefined __stdcall FUN_0042e890(LPCSTR param_1, LPCSTR param_2, undefined4 * param_3)
 * body: 0042e890-0042e98c
 */

void FUN_0042e890(LPCSTR param_1,LPCSTR param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  byte local_40 [64];
  
  read_ini_string_setting(param_1,param_2,(LPSTR)local_40,0x3f);
  iVar3 = -1;
  pbVar4 = local_40;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  FUN_004a6980((uint)(iVar3 != -2),(byte *)s__s__d__Can_t_find_car_sound_sett_00597704);
  iVar3 = get_ini_arguments_online(local_40,(uint *)0x0);
  FUN_004a6980((uint)(iVar3 == 4),(byte *)s__s___d__Incorrect_number_of_argu_00597768);
  uVar2 = FUN_004c3ec0(0);
  *param_3 = uVar2;
  uVar2 = FUN_004c3ec0(1);
  param_3[1] = uVar2;
  iVar3 = FUN_004c3ec0(2);
  param_3[2] = iVar3;
  if ((iVar3 < 0) || (100 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  FUN_004a6980(iVar3,(byte *)s__s___d__Incorrect_value_for_mini_005977f0);
  iVar3 = FUN_004c3ec0(3);
  param_3[3] = iVar3;
  if ((iVar3 < 0) || (100 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  FUN_004a6980(iVar3,(byte *)s__s___d__Incorrect_value_for_maxi_00597858);
  return;
}



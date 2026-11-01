
/* ==== FUN_00452e94 @ 00452e94 ==== 
 * signature: undefined __register FUN_00452e94(int * param_1, int param_2)
 * body: 00452e94-0045307e
 */

void FUN_00452e94(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_140;
  code *pcStack_13c;
  code *pcStack_138;
  int local_128 [4];
  undefined1 local_118;
  int local_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int local_8;
  
  pcStack_138 = (code *)&stack0xfffffffc;
  local_128[2] = 0;
  local_128[1] = 0;
  local_128[0] = 0;
  local_c = 0;
  local_10 = 0;
  local_114 = 0;
  pcStack_13c = thunk_FUN_004036bc;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  iVar5 = 0;
  iVar4 = 0;
  local_8 = param_2;
  while (iVar5 == 0) {
    iVar3 = FUN_00451bac(param_1[2]);
    if (iVar3 <= iVar4) break;
    piVar2 = (int *)(*(code *)**(undefined4 **)param_1[2])((undefined4 *)param_1[2],iVar4);
    iVar3 = FUN_0040312c(piVar2,(int)FUN_00452afc);
    bVar1 = FUN_00452bac(iVar3,local_8);
    if (bVar1) {
      piVar2 = (int *)(*(code *)**(undefined4 **)param_1[2])((undefined4 *)param_1[2],iVar4);
      iVar5 = FUN_0040312c(piVar2,(int)FUN_00452afc);
    }
    else {
      bVar6 = SCARRY4(iVar4,1);
      iVar4 = iVar4 + 1;
      if (bVar6) {
        thunk_FUN_00402808(CONCAT31(extraout_var,bVar1));
      }
    }
  }
  if (iVar5 == 0) {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(&local_10,local_110);
    local_128[3] = local_8;
    local_118 = 5;
    FUN_00409254((byte *)
                 ": Finalization procedure (%p) should be registered.\r\nThis address can be used to find the procedure.\r\n(Delphi 5 Search-menu Find error)\r\n"
                 ,local_128 + 3,0,&local_114);
    FUN_00403f9c(&local_c,4);
    FUN_00403c40(local_c);
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    FUN_00402ee4(*param_1,local_110);
    FUN_00403e80(local_128 + 1,local_110);
    local_128[3] = local_8;
    local_118 = 5;
    FUN_00409254((byte *)
                 ": Finalization procedure (%p) is already added to finalizationlist.\r\nThis address can be used to find the procedure.\r\n(Delphi Search-menu Find error)\r\n"
                 ,local_128 + 3,0,local_128);
    FUN_00403f9c(local_128 + 2,4);
    FUN_00403c40(local_128[2]);
  }
  *(undefined1 *)(iVar5 + 4) = 1;
  (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],iVar4);
  (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],iVar5);
  *in_FS_OFFSET = uStack_140;
  pcStack_138 = FUN_00453086;
  pcStack_13c = (code *)0x453066;
  FUN_00403c80(local_128,3);
  pcStack_13c = (code *)0x453071;
  FUN_00403c5c(&local_114);
  pcStack_13c = (code *)0x45307e;
  FUN_00403c80(&local_10,2);
  return;
}



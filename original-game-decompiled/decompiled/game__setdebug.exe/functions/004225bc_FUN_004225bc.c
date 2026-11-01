
/* ==== FUN_004225bc @ 004225bc ==== 
 * signature: int * __register FUN_004225bc(LONG * param_1, int * param_2)
 * body: 004225bc-00422705
 */

int * FUN_004225bc(LONG *param_1,int *param_2)

{
  POINT pt;
  char cVar1;
  bool bVar2;
  ushort uVar3;
  HWND hWnd;
  BOOL BVar4;
  int iVar5;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *puVar6;
  undefined1 *extraout_ECX_07;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar7;
  undefined4 extraout_EDX_08;
  int iVar8;
  int iVar9;
  RECT local_2c;
  int *local_1c;
  int *local_18;
  int *local_14;
  LONG local_10;
  LONG local_c;
  char local_5;
  
  local_10 = *param_1;
  local_c = param_1[1];
  local_1c = (int *)0x0;
  local_14 = param_2;
  uVar3 = GetKeyState(0x11);
  if ((uVar3 & 0x8000) == 0 && DAT_00447774 != (undefined4 *)0x0) {
    (**(code **)(*DAT_00447778 + 8))();
    iVar8 = DAT_00447774[2];
    puVar6 = extraout_ECX;
    uVar7 = extraout_EDX;
    if (-1 < iVar8 + -1) {
      iVar9 = 0;
      do {
        local_18 = (int *)FUN_0040f024(DAT_00447774,iVar9);
        puVar6 = extraout_ECX_00;
        uVar7 = extraout_EDX_00;
        if ((local_18 != local_14) && ((char)local_18[0x5a] != '\0')) {
          cVar1 = (**(code **)(*local_18 + 0x4c))();
          puVar6 = extraout_ECX_01;
          uVar7 = extraout_EDX_01;
          if (cVar1 != '\0') {
            hWnd = (HWND)FUN_0042a8b4(local_18);
            BVar4 = IsWindowVisible(hWnd);
            puVar6 = extraout_ECX_02;
            uVar7 = extraout_EDX_02;
            if (BVar4 != 0) {
              puVar6 = &stack0xfffffffc;
              bVar2 = FUN_00422578();
              uVar7 = extraout_EDX_03;
              if (!bVar2) {
                if ((int *)local_14[0x24] == local_18) {
                  iVar5 = FUN_00429240((int)local_18);
                  puVar6 = extraout_ECX_03;
                  uVar7 = extraout_EDX_04;
                  if (iVar5 < 2) goto LAB_004226c3;
                }
                local_5 = '\x01';
                FUN_00402ef0(local_18,local_14,&local_2c);
                puVar6 = extraout_ECX_04;
                uVar7 = extraout_EDX_05;
                if (local_5 != '\0') {
                  pt.y = local_c;
                  pt.x = local_10;
                  BVar4 = PtInRect(&local_2c,pt);
                  puVar6 = extraout_ECX_05;
                  uVar7 = extraout_EDX_06;
                  if (BVar4 != 0) {
                    FUN_00421dc4(DAT_00447778,local_18);
                    puVar6 = extraout_ECX_06;
                    uVar7 = extraout_EDX_07;
                  }
                }
              }
            }
          }
        }
LAB_004226c3:
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (0 < DAT_00447778[2]) {
      local_1c = (int *)FUN_00421e54(DAT_00447778,uVar7,(int)puVar6);
      puVar6 = extraout_ECX_07;
      uVar7 = extraout_EDX_08;
    }
    if (local_1c != (int *)0x0) {
      cVar1 = FUN_004223e0(local_1c,uVar7,puVar6,(int)&stack0xfffffffc);
      if (cVar1 == '\0') {
        local_1c = (int *)0x0;
      }
    }
  }
  return local_1c;
}



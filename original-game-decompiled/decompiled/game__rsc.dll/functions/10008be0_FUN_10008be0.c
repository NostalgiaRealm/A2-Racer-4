
/* ==== FUN_10008be0 @ 10008be0 ==== 
 * signature: int __cdecl FUN_10008be0(int param_1, int param_2)
 * body: 10008be0-10008dda
 */

int __cdecl FUN_10008be0(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100073f0(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_1003160c == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_10008e10,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10006f30();
          *pDVar4 = DVar3;
          FUN_10007490(1);
          goto LAB_10008dc8;
        }
        DAT_1003160c = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_100315fc;
        DAT_100315fc = param_2;
        break;
      case 0xf:
        local_10 = DAT_10031608;
        DAT_10031608 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10031600;
        DAT_10031600 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10031604;
        DAT_10031604 = param_2;
      }
      FUN_10007490(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100077b0();
      if ((undefined *)pDVar4[0x14] == &DAT_10030220) {
        DVar3 = FUN_10003710(DAT_100302a0,2,0x1002ceac,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10008dc8;
        FUN_100061d0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10030220,(uint)DAT_100302a0);
      }
      local_c = FUN_100090f0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_100302a4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10008dc8:
  puVar5 = (undefined4 *)FUN_10006f20();
  *puVar5 = 0x16;
  return -1;
}



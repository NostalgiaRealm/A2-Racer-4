
/* ==== FUN_0056758d @ 0056758d ==== 
 * signature: undefined4 __cdecl FUN_0056758d(uint * param_1, int param_2)
 * body: 0056758d-00567713
 */

undefined4 __cdecl FUN_0056758d(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar1 = FUN_00568645(param_1,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar7 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_0074dc88 == DAT_0074dc8c) {
    DAT_0074dc88 = FUN_0056776c(DAT_0074dc88);
  }
  if (DAT_0074dc88 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_0074dc90 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_0074dc88 = _malloc(4);
      if (DAT_0074dc88 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_0074dc88 = 0;
      if (DAT_0074dc90 == (undefined4 *)0x0) {
        DAT_0074dc90 = _malloc(4);
        if (DAT_0074dc90 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_0074dc90 = 0;
      }
    }
    else {
      iVar2 = FUN_00562da7();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_0074dc88;
  iVar2 = FUN_00567714((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = FUN_0055a9b4(piVar3,(uint *)(iVar2 * 4 + 8));
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar7) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_005676c1;
    }
    piVar6 = piVar3 + iVar2;
    FUN_00559d4e((LPVOID)piVar3[iVar2]);
    for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
      iVar2 = iVar2 + 1;
      *piVar6 = piVar6[1];
    }
    piVar3 = FUN_0055a9b4(piVar3,(uint *)(iVar2 << 2));
    if (piVar3 == (int *)0x0) goto LAB_005676c1;
  }
  DAT_0074dc88 = piVar3;
LAB_005676c1:
  if (param_2 != 0) {
    sVar4 = _strlen((char *)param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (uint *)0x0) {
      FUN_0055ee40(lpName,param_1);
      puVar5 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar1);
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(puVar5 + 1)));
      FUN_00559d4e(lpName);
    }
  }
  return 0;
}



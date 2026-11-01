
/* ==== FUN_10014df0 @ 10014df0 ==== 
 * signature: undefined4 __cdecl FUN_10014df0(uint * param_1, int param_2)
 * body: 10014df0-100150cf
 */

undefined4 __cdecl FUN_10014df0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  int local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_10015240((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_100314c8 == DAT_100314cc) {
    DAT_100314c8 = copy_environ(DAT_100314c8);
  }
  if (DAT_100314c8 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100314d0 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_100314c8 = (int *)FUN_10003710((void *)0x4,2,0x1002d960,0x87);
      if (DAT_100314c8 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100314c8 = 0;
      if (DAT_100314d0 == (undefined4 *)0x0) {
        DAT_100314d0 = (undefined4 *)FUN_10003710((void *)0x4,2,0x1002d960,0x8e);
        if (DAT_100314d0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100314d0 = 0;
      }
    }
    else {
      iVar2 = FUN_100148f0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_100314c8;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = FUN_10003ba0(piVar3,(void *)(local_c * 4 + 8),2,0x1002d960,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_100314c8 = piVar3;
  }
  else if (bVar6) {
    FUN_100041a0((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = FUN_10003ba0(piVar3,(void *)(local_c << 2),2,0x1002d960,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_100314c8 = piVar3;
    }
  }
  else {
    piVar3[local_c] = (int)param_1;
  }
  if (param_2 != 0) {
    iVar2 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    lpName = (uint *)FUN_10003710((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_10001ec0(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_100041a0(lpName,2);
    }
  }
  return 0;
}



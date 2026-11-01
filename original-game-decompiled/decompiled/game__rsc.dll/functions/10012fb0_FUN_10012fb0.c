
/* ==== FUN_10012fb0 @ 10012fb0 ==== 
 * signature: undefined4 __cdecl FUN_10012fb0(int param_1, LCID param_2, LCTYPE param_3, int * param_4)
 * body: 10012fb0-10013239
 */

undefined4 __cdecl FUN_10012fb0(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  void *pvVar3;
  int iVar4;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  void *local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_10014230(param_2,param_3,(LPWSTR)&DAT_100316c8,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_10030214 < 2) {
          bVar1 = (&DAT_100316c8)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_10030008 + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_100316c8)[local_a4 * 2];
          local_ac = FUN_1000b640((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  local_c = (void *)FUN_100143d0(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_100143d0(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_10003710(pvVar3,2,0x1002d864,0x58), local_10 == (LPSTR)0x0))
    goto LAB_100130fd;
    local_8 = 1;
    local_c = (void *)FUN_100143d0(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_100130fd;
  }
  iVar4 = FUN_10003710(local_c,2,0x1002d864,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_100041a0(local_10,2);
    }
    return 0;
  }
LAB_100130fd:
  if (local_8 != 0) {
    FUN_100041a0(local_10,2);
  }
  return 0xffffffff;
}



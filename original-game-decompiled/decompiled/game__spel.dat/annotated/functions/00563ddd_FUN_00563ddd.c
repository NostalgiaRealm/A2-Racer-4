
/* ==== FUN_00563ddd @ 00563ddd ==== 
 * signature: uint __cdecl FUN_00563ddd(LPWSTR param_1, byte * param_2, uint param_3)
 * body: 00563ddd-00563ea4
 */

uint __cdecl FUN_00563ddd(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_0074dce4 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_005c8384[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_0074dcf4,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_005c8378) {
          if ((int)param_3 < (int)DAT_005c8378) {
            DAT_0074dc60 = 0x2a;
            return 0xffffffff;
          }
          iVar2 = MultiByteToWideChar(DAT_0074dcf4,9,(LPCSTR)param_2,DAT_005c8378,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_005c8378;
          }
        }
        if ((DAT_005c8378 <= param_3) && (param_2[1] != 0)) {
          return DAT_005c8378;
        }
      }
      DAT_0074dc60 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}



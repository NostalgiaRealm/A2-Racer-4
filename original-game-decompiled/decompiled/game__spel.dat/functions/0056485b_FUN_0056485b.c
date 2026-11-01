
/* ==== FUN_0056485b @ 0056485b ==== 
 * signature: undefined4 __stdcall FUN_0056485b(void)
 * body: 0056485b-00564a9f
 */

undefined4 FUN_0056485b(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  uint uVar8;
  LPCWSTR pWVar9;
  undefined4 uVar10;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  LPCWSTR local_c;
  LPCSTR local_8;
  
  uVar10 = 0;
  local_8 = (LPCSTR)0x0;
  local_c = (LPCWSTR)0x0;
  if (DAT_0074dce4 == 0) {
    PTR_DAT_005c8384 = &DAT_005c838e;
    PTR_DAT_005c8388 = &DAT_005c838e;
    FUN_00559d4e(DAT_0074df88);
    FUN_00559d4e(DAT_0074df8c);
    DAT_0074df88 = (undefined2 *)0x0;
    DAT_0074df8c = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_0074dcf4 != 0) ||
     (iVar4 = FUN_00567884(0,(uint)DAT_0074df9c,0x1004,(char *)&DAT_0074dcf4), iVar4 == 0)) {
    puVar5 = _malloc(0x202);
    local_14 = puVar5;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar5 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (LPCSTR)0x0)) && (local_c != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        local_8[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar6 = GetCPInfo(DAT_0074dcf4,&local_28);
      if ((BVar6 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_005c8378 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_005c8378) && (local_28.LeadByte[0] != '\0')) {
          pBVar7 = local_28.LeadByte + 1;
          do {
            bVar3 = *pBVar7;
            if (bVar3 == 0) break;
            for (uVar8 = (uint)pBVar7[-1]; (int)uVar8 <= (int)(uint)bVar3; uVar8 = uVar8 + 1) {
              local_8[uVar8] = '\0';
              bVar3 = *pBVar7;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        BVar6 = FUN_00565391(1,local_8,0x100,puVar5 + 1,0,0,0);
        if (BVar6 != 0) {
          *puVar5 = 0;
          iVar4 = 0;
          pWVar9 = local_c;
          do {
            *pWVar9 = (WCHAR)iVar4;
            pWVar9 = pWVar9 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar2 = local_10 + 1;
          BVar6 = FUN_005679bc(1,local_c,0x100,pWVar2,0,0);
          if (BVar6 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_005c8378) && (local_28.LeadByte[0] != '\0')) {
              pBVar7 = local_28.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar8 = (uint)pBVar7[-1];
                if (uVar8 <= *pBVar7) {
                  puVar5 = local_14 + uVar8 + 1;
                  do {
                    *puVar5 = 0x8000;
                    uVar8 = uVar8 + 1;
                    puVar5 = puVar5 + 1;
                  } while ((int)uVar8 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_005c8384 = (undefined *)(local_14 + 1);
            PTR_DAT_005c8388 = (undefined *)pWVar2;
            if (DAT_0074df88 != (undefined2 *)0x0) {
              FUN_00559d4e(DAT_0074df88);
            }
            DAT_0074df88 = local_14;
            if (DAT_0074df8c != (undefined2 *)0x0) {
              FUN_00559d4e(DAT_0074df8c);
            }
            DAT_0074df8c = local_10;
            goto LAB_00564a39;
          }
        }
      }
    }
  }
  FUN_00559d4e(local_14);
  FUN_00559d4e(local_10);
  uVar10 = 1;
LAB_00564a39:
  FUN_00559d4e(local_8);
  FUN_00559d4e(local_c);
  return uVar10;
}



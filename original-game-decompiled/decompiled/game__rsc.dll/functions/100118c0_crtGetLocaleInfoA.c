
/* ==== crtGetLocaleInfoA @ 100118c0 ==== 
 * signature: int __stdcall crtGetLocaleInfoA(uint param_1, uint param_2, char * param_3, int param_4)
 * body: 100118c0-10011a43
 * note: Library Function - Single Match  _crtGetLocaleInfoA@16  Library: Visual Studio 2003 Debug __stdcall crtGetLocaleInfoA,16
 */

/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Debug
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_14;
  char *local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0x1a;
  local_c = (char *)0x0;
  do {
    if (local_8 < local_14) {
LAB_10011a28:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1003054c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_10030534 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_10030540 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_10030548 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1003053c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_10030544)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_10030554 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_10011a28;
    }
    if (param_1 < *(uint *)(&DAT_10030530 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}



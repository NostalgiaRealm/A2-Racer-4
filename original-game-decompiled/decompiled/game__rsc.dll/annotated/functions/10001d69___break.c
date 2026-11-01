
/* ==== __break @ 10001d69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 10001d69-10001d69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



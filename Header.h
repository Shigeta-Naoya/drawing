//�萔�錾


//�֐��錾
BOOL CALLBACK MainDlgProc( HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam );	//���C���_�C�A���O�v���V�[�W��
BOOL WinInitialize( HINSTANCE hInst, HWND hPaWnd, HMENU chID, char *cWinName, HWND PaintArea, WNDPROC WndProc ,HWND *hDC);//�q�E�B���h�E�𐶐�
UINT WINAPI TFunc( LPVOID thParam );												//�f�[�^�ǂݍ��ݗp�X���b�h
HRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);		//�q�E�B���h�E�v���V�[�W��
BOOL PLOT(HWND hWnd, int sec, int data,int bsec,int bdata);							//�g�`�`��
BOOL REPaint(HWND hWnd);															//�w�i�Ǝ��̍ĕ`��
										//�ϐ��錾
static COLORREF	color, colorPen,bkcolor;	//�F
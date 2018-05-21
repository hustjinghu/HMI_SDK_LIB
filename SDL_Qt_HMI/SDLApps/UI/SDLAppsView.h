#ifndef SDLAPPSVIEW_H
#define SDLAPPSVIEW_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QTextEdit>
#include "SDLApps/Templates/Common/MenuButton.h"
#include "app_list_interface.h"
#include "HMIFrameWork/CView.h"

class SDLAppsView : public QWidget,public CView{
  typedef enum {
    MENU_MUSIC = 0,
    MENU_MF,
    MENU_PTHONE,
    MENU_HOME,
    MENU_APPLIST,
    MENU_SETTING,
    MENU_MAX
  } MENU_APP_TYPE;

  Q_OBJECT
 public:
  explicit SDLAppsView(AppListInterface *pList, QWidget *parent = 0);
  ~SDLAppsView();
   virtual void viewAction(int state);

  QWidget *CenterWidget();
  //void InsertChildApp(int index,int funcId,QString text,QString on,QString off);
  //void DeleteChildApp(int index);
//    void ExeRPC();

  void StartVideoStream(const char *url);
  void StopVideoStream();

  bool InVideoStream();

  void BackToVideoStream();

  // add by fanqiang
  void SetSDLStatus(bool bConnect);

  void HideAllComponent();
  void ShowAllComponent();
  void HideMenuBar();
  void ShowMenuBar();
 protected:
  virtual void showEvent(QShowEvent *e);

 signals:

 public slots:
  void onUpdateTime();
  void onMenuSelected();
  //void onChildAppSelected(int funcId);

  void OnVideoStreamMenuBtnClicked();
 private:
  //VideoStream* videoWidget;
  // add by fanqiang
  QLabel *m_pSDLStatus;
  QLabel *m_pIcon;
  QLabel *m_pTime;
  QLabel *m_pNetStatus;
  QWidget *m_pCenter;
  QWidget  *m_pMainMenu;
  MenuButton  *m_pMenuTab[MENU_MAX];
  QTimer  *m_pTimer;
  //QList<CAppButton*> m_pChildApps;

  AppListInterface *m_pList;
  int  m_AppWidth;
  int  m_AppHeight;

  bool m_bInVideoStream;
  bool m_bsdlStatus;
};

#endif // SDLAPPSVIEW_H

#include <calibration/calibration_panel.h>
#include <pluginlib/class_list_macros.h>
#include <std_msgs/Float64.h>

#include "ui_calibration_panel.h"

namespace calibration
{
CalibrationPanel::CalibrationPanel(QWidget* parent) : Panel(parent),  ui_(new Ui::CalibUI())
{
  ui_->setupUi(this);
}

CalibrationPanel::~CalibrationPanel() = default;

void CalibrationPanel::onInitialize()
{
  connect(ui_->pushButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));

  parentWidget()->setVisible(true);
}

void CalibrationPanel::buttonClicked()
{
  ROS_INFO("Button pushed");
}

}  // namespace calibration

PLUGINLIB_EXPORT_CLASS(calibration::CalibrationPanel, rviz::Panel )
